//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@interface MMTimerLabel : UILabel
{
    long long _second;
    long long _minute;
    long long _hour;
    _Bool _isShowHourDefault;
    _Bool _isActive;
}

- (void)dealloc;
@property(nonatomic) long long hour; // @synthesize hour=_hour;
- (void)increaseTime;
@property(nonatomic) long long minute; // @synthesize minute=_minute;
- (void)pauseTimer;
- (void)reset;
@property(nonatomic) long long second; // @synthesize second=_second;
- (void)setIsShowHourDefault:(_Bool)arg1;
- (void)startTimer;
- (void)stopTimer;
- (void)updateLabel;

@end
