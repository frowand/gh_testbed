/*
 * Copyright 2018  Frank Rowand  frowand.list@gmail.com
 *
 * license: GPL V2
 * This file is subject to the terms and conditions of the GNU General Public
 * License v2.
 *
 */

#include <stdio.h>

#include "gh_lib.h"

int main(int argc, char *argv[])
{
	int k;

	printf("program name is >>%s<<\n", argv[0]);

	printf("\n");
	printf("  k  add_one()\n");
	printf("---  ---------");
	printf("\n");

	for (k = 0; k < 10; k++)
		printf("%3d  %3d\n", k, add_one(k));

	printf("\n");
}
