//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMKernelExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSString, WASessionNotifyInfo;

@interface WASessionNotifyMgr : MMService <PBMessageObserverDelegate, MMKernelExt, MMService>
{
    WASessionNotifyInfo *_notifyInfo;
}

+ (id)loadNotifyInfoFromFile;
+ (void)saveToNotifyInfoToFile:(id)arg1;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callExtensionOnSessionNotifyUpdate;
- (void)dealloc;
- (id)generateNotifyOptionItemListAndSyncToMemory:(id)arg1 closeUserNameList:(id)arg2 openUserNameList:(id)arg3;
- (id)getGlobalSessionNotifyOpenStatus;
- (id)getSessionNotifyCloseList;
- (id)init;
- (void)onManulLoginOK;
- (void)onResponseSessionNotify:(id)arg1 withRequest:(id)arg2;
- (void)onResponseSwitchSessionNotify:(id)arg1 withRequest:(id)arg2;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)requestGlobalSessionNotifyOpenStatus;
- (void)requestSessionNotifyInfo;
- (void)requestSessionNotifyWithType:(unsigned int)arg1;
- (void)requestSwitchSessionNotifyWithGlobalOpenStatus:(id)arg1 closeUserNameList:(id)arg2 openUserNameList:(id)arg3;
- (void)rollbackSwitchRequestChangeFromFileToMemory:(id)arg1;
- (void)saveNotifyOptionToMemoryAndFile:(id)arg1 withRequest:(id)arg2;
- (void)setGlobalSessionNotifyOpenStatus:(id)arg1 openUserNameList:(id)arg2;
- (void)setSessionNotifyClose:(id)arg1;
- (void)setSessionNotifyOpen:(id)arg1;
- (void)syncSwitchRequestChangeToFile:(id)arg1;
- (void)updateSessionHolderNotify:(id)arg1;
- (void)updateSessionNotifyIsOpen:(_Bool)arg1 userNameList:(id)arg2;
- (void)updateSessionNotifyToClose:(id)arg1;
- (void)updateSessionNotifyToOpen:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

