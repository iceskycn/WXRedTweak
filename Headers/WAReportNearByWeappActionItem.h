//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportNearByWeappActionItem : WAReportBaseItem
{
    unsigned int _appCount;
    unsigned int _clicktime;
    unsigned long long _enterScene;
    unsigned long long _openType;
    NSString *_nearbyListID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int appCount; // @synthesize appCount=_appCount;
@property(nonatomic) unsigned int clicktime; // @synthesize clicktime=_clicktime;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(copy, nonatomic) NSString *nearbyListID; // @synthesize nearbyListID=_nearbyListID;
@property(nonatomic) unsigned long long openType; // @synthesize openType=_openType;
- (id)reportString;

// Remaining properties
@property(copy, nonatomic) NSString *sceneNote;

@end

