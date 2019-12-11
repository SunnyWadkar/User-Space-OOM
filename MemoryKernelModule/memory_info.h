#ifndef MEMORY_INFO_H
#define MEMORY_INFO_H

#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kallsyms.h>
#include <linux/proc_fs.h>
#include <linux/swap.h>
#include <linux/mm.h>
#include <linux/kthread.h>
#include <linux/delay.h>
#include <linux/slab.h>
#include <linux/fs.h>
#include <linux/sched.h>

struct statmem_t
{
	int sys_page_size;
	long totalMemory;
	long availableMemory;
	int totalSwapMemory;
	int freeSwapMemory;
	int percentMemoryAvailable;
	int percentFreeSwap;
};

#endif
