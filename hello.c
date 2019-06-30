#include <linux/module.h>
#include <linux/kernel.h>

MODULE_DESCRIPTION("HELLO KERNEL");
MODULE_AUTHOR("subaruf");
MODULE_LICENSE("GPL");

static char *whom = "name";
module_param(whom, charp, S_IRUGO);

static int hello(void) {
	printk(KERN_ALERT "hello %s\n", whom);
	return 0;
}

static void bye(void) {
	printk(KERN_ALERT "bye %s\n", whom);
}

module_init(hello);
module_exit(bye);

