//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMessageWrapExt.h"
#import "IMsgExtendOperation.h"
#import "NSCopying.h"

@class CMessageWrap, NSString;

@interface CExtendInfoOfEmoticon : NSObject <IMessageWrapExt, IMsgExtendOperation, NSCopying>
{
    NSString *m_nsEmoticonMD5;
    unsigned int m_uiEmoticonType;
    unsigned int m_uiGameType;
    unsigned int m_uiGameContent;
    unsigned int m_uiUploadStatus;
    NSString *m_nsEmoticonBelongToProductID;
    NSString *m_nsDesignerId;
    NSString *m_nsThumbImgUrl;
    _Bool m_bShowRewardTips;
    unsigned int _m_uiEmoticonWidth;
    unsigned int _m_uiEmoticonHeight;
    CMessageWrap *m_refMessageWrap;
    NSString *m_cdnUrlString;
    NSString *m_encryptUrlString;
    NSString *m_aesKey;
    NSString *m_nsExternUrl;
    NSString *m_nsExternMd5;
    NSString *m_nsActivityId;
}

+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
- (void).cxx_destruct;
- (void)ChangeForDisplay;
- (id)GetContent;
- (id)GetGameStatReportString;
- (void)UpdateContent:(id)arg1;
- (void)UpdateGameInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)init;
@property(retain, nonatomic) NSString *m_aesKey; // @synthesize m_aesKey;
@property(nonatomic) _Bool m_bShowRewardTips; // @synthesize m_bShowRewardTips;
@property(retain, nonatomic) NSString *m_cdnUrlString; // @synthesize m_cdnUrlString;
@property(retain, nonatomic) NSString *m_encryptUrlString; // @synthesize m_encryptUrlString;
@property(retain, nonatomic) NSString *m_nsActivityId; // @synthesize m_nsActivityId;
@property(retain, nonatomic) NSString *m_nsDesignerId; // @synthesize m_nsDesignerId;
@property(copy, nonatomic) NSString *m_nsEmoticonBelongToProductID; // @synthesize m_nsEmoticonBelongToProductID;
@property(retain, nonatomic) NSString *m_nsEmoticonMD5; // @synthesize m_nsEmoticonMD5;
@property(retain, nonatomic) NSString *m_nsExternMd5; // @synthesize m_nsExternMd5;
@property(retain, nonatomic) NSString *m_nsExternUrl; // @synthesize m_nsExternUrl;
@property(retain, nonatomic) NSString *m_nsThumbImgUrl; // @synthesize m_nsThumbImgUrl;
@property(nonatomic) CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
@property(nonatomic) unsigned int m_uiEmoticonHeight; // @synthesize m_uiEmoticonHeight=_m_uiEmoticonHeight;
@property(nonatomic) unsigned int m_uiEmoticonType; // @synthesize m_uiEmoticonType;
@property(nonatomic) unsigned int m_uiEmoticonWidth; // @synthesize m_uiEmoticonWidth=_m_uiEmoticonWidth;
@property(nonatomic) unsigned int m_uiGameContent; // @synthesize m_uiGameContent;
@property(nonatomic) unsigned int m_uiGameType; // @synthesize m_uiGameType;
@property(nonatomic) unsigned int m_uiUploadStatus; // @synthesize m_uiUploadStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

