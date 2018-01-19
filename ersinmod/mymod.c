/*  
 *  mymod.c
 */
#include <linux/module.h>
#include <linux/kernel.h>
#include "mymod.h"

void myfunc(foo_t *arg)
{
	printk("myfunc called with %d\n", arg->a);
}
EXPORT_SYMBOL(myfunc);

int init_module(void)
{
	printk(KERN_INFO "My module loaded.\n");

	return 0;
}

void cleanup_module(void)
{
	printk(KERN_INFO "My module unloaded.\n");
}
