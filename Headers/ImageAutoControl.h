//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface ImageAutoControl : NSObject <PBCoding>
{
    double m_douLimitBegin;
    int m_nDownloadCount;
}

+ (void)initialize;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
@property(nonatomic) double m_douLimitBegin; // @synthesize m_douLimitBegin;
@property(nonatomic) int m_nDownloadCount; // @synthesize m_nDownloadCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
