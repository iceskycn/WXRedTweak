//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ShareUploadTaskConfirmLogicHelper;

@protocol ShareUploadTaskConfirmLogicHelperDelegate <NSObject>

@optional
- (void)OnSendUploadTaskCancel:(ShareUploadTaskConfirmLogicHelper *)arg1;
- (void)OnSendUploadTaskFail:(ShareUploadTaskConfirmLogicHelper *)arg1 WithError:(int)arg2;
- (void)OnSendUploadTaskOK:(ShareUploadTaskConfirmLogicHelper *)arg1;
@end
