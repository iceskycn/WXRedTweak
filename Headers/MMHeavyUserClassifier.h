//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMHeavyUserDataSource, NSObject<OS_dispatch_queue>;

@interface MMHeavyUserClassifier : NSObject
{
    MMHeavyUserDataSource *m_dataSource;
    unsigned long long m_contactCountStandard;
    unsigned long long m_sessionCountStandard;
    unsigned long long m_wechatSizeStandard;
    NSObject<OS_dispatch_queue> *m_calQueue;
    id <MMHeavyUserClassifierDelegate> _delegate;
}

+ (_Bool)isContactsType:(unsigned long long)arg1;
+ (_Bool)isFileSpaceType:(unsigned long long)arg1;
+ (_Bool)isSessionType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)checkContactType;
- (void)checkFileSpaceType;
- (void)checkSessionType;
@property(nonatomic) __weak id <MMHeavyUserClassifierDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)heavyUserType;
- (id)initWithDataSource:(id)arg1 withQueue:(id)arg2;
- (_Bool)isHeavyUser;
- (void)p_checkABTestSetting;
- (void)p_heavyUserTypeChange:(unsigned long long)arg1;
- (void)reclassify;

@end

