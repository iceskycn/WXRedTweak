//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPushContact, MMUIViewController;

@protocol SayHelloDataLogicDelegate <NSObject>
- (void)OnSayHelloDataChange;
- (MMUIViewController *)getViewController;

@optional
- (void)OnSayHelloDataSendVerifyMsg:(CPushContact *)arg1;
- (void)OnSayHelloDataUnReadCountChange;
- (void)OnSayHelloDataVerifyContactOK:(CPushContact *)arg1;
@end
