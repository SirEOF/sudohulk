#ifndef __SH_COMMON__
#define __SH_COMMON__

#if !defined (__x86_64__) && !defined (__i386__) && !defined (__arm__)
	#error "only works in x86_64, x86 and arm32"
#endif

#define __wordsize sizeof(long)


#endif
