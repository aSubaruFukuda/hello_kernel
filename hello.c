#include <linux/module.h>
#include <linux/kernel.h>

MODULE_DESCRIPTION("HELLO KERNEL");
MODULE_AUTHOR("subaruf");
MODULE_LICENSE("GPL");

static int hello(void) {
	printk("hello kernel\n");
	return 0;
}

static void bye(void) {
	printk("bye kernel\n");
}

module_init(hello);
module_exit(bye);

