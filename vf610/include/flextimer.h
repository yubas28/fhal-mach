#ifndef FLEXTIMER_H_
#define FLEXTIMER_H_
#include <stdint.h>
#include <stdbool.h>
#include <timer.h>


int32_t ftm_setupPWM(struct timer *ftm, uint32_t channel);
int32_t ftm_setPWMDutyCycle(struct timer *ftm, uint32_t channel, uint64_t us);
int32_t ftm_setCaptureHandler(struct timer *ftm, bool (*irqhandle)(struct timer *ftm, void *data, uint32_t channel), void *data);
int32_t ftm_setupCapture(struct timer *ftm, uint32_t channel);
int64_t ftm_getChannelTime(struct timer *ftm, uint32_t channel);
#endif
