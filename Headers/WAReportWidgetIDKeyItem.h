//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAReportWidgetBaseItem.h"

@interface WAReportWidgetIDKeyItem : WAReportWidgetBaseItem
{
    unsigned int _idkey_id;
    unsigned int _idkey_key;
    unsigned int _idkey_value;
}

@property(nonatomic) unsigned int idkey_id; // @synthesize idkey_id=_idkey_id;
@property(nonatomic) unsigned int idkey_key; // @synthesize idkey_key=_idkey_key;
@property(nonatomic) unsigned int idkey_value; // @synthesize idkey_value=_idkey_value;
- (int)reportID;
- (id)reportString;

@end
