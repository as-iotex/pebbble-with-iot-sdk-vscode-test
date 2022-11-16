/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr.h>
#include <sys/printk.h>
#include "svc/crypto.h"

void main(void)
{
	uint8_t out;
	psa_generate_random(&out, 1);
	printk("Hello World! %s %d\n", CONFIG_BOARD, out);
}
