#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>
#include <sys/syscall.h>
#include <linux/futex.h>
#include <errno.h>
#include <atomic>
#include <new>
#include "svcer_def.h"