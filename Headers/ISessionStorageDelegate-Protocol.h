//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol ISessionStorageDelegate <NSObject>
- (NSArray *)importSessions;

@optional
- (long long)compareSession:(id <WCTTableCoding>)arg1 rightSession:(id <WCTTableCoding>)arg2;
- (void)deleteOldVersionSessionCache;
@end

