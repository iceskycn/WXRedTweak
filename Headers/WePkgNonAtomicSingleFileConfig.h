//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WePkgNonAtomicSingleFileConfig : MMObject
{
    _Bool _bClearAllPkgExceptCurrentEnabledVersion;
    _Bool _bIsReadyForOperationAfterCheckUpdate;
    unsigned int _uiPkgType;
    unsigned int _uiLastUnusedSeconds;
    unsigned int _uiCheckIntervalSeconds;
    unsigned int _uiNonAtomicSingleFileCount;
    unsigned int _uiCheckUpdateSuccessTime;
    NSString *_nsPkgId;
    NSString *_nsAppId;
    NSString *_nsEnteranceDomain;
    NSString *_nsCurrentEnabledVersion;
    NSString *_nsCheckResonseMd5;
    NSString *_nsCharSet;
    NSMutableArray *_nonAtomicSingleFileListNeedDownload;
    NSMutableArray *_nonAtomicSingleFileListDownloadSuccessed;
    NSMutableDictionary *_file2DownloadFailCount;
}

+ (id)nonAtomicSingleFileConfigFromTableItem:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool bClearAllPkgExceptCurrentEnabledVersion; // @synthesize bClearAllPkgExceptCurrentEnabledVersion=_bClearAllPkgExceptCurrentEnabledVersion;
@property(nonatomic) _Bool bIsReadyForOperationAfterCheckUpdate; // @synthesize bIsReadyForOperationAfterCheckUpdate=_bIsReadyForOperationAfterCheckUpdate;
- (id)debugDescription;
@property(retain, nonatomic) NSMutableDictionary *file2DownloadFailCount; // @synthesize file2DownloadFailCount=_file2DownloadFailCount;
- (id)generateTableItem;
@property(retain, nonatomic) NSMutableArray *nonAtomicSingleFileListDownloadSuccessed; // @synthesize nonAtomicSingleFileListDownloadSuccessed=_nonAtomicSingleFileListDownloadSuccessed;
@property(retain, nonatomic) NSMutableArray *nonAtomicSingleFileListNeedDownload; // @synthesize nonAtomicSingleFileListNeedDownload=_nonAtomicSingleFileListNeedDownload;
@property(retain, nonatomic) NSString *nsAppId; // @synthesize nsAppId=_nsAppId;
@property(retain, nonatomic) NSString *nsCharSet; // @synthesize nsCharSet=_nsCharSet;
@property(retain, nonatomic) NSString *nsCheckResonseMd5; // @synthesize nsCheckResonseMd5=_nsCheckResonseMd5;
@property(retain, nonatomic) NSString *nsCurrentEnabledVersion; // @synthesize nsCurrentEnabledVersion=_nsCurrentEnabledVersion;
@property(retain, nonatomic) NSString *nsEnteranceDomain; // @synthesize nsEnteranceDomain=_nsEnteranceDomain;
@property(retain, nonatomic) NSString *nsPkgId; // @synthesize nsPkgId=_nsPkgId;
@property(nonatomic) unsigned int uiCheckIntervalSeconds; // @synthesize uiCheckIntervalSeconds=_uiCheckIntervalSeconds;
@property(nonatomic) unsigned int uiCheckUpdateSuccessTime; // @synthesize uiCheckUpdateSuccessTime=_uiCheckUpdateSuccessTime;
@property(nonatomic) unsigned int uiLastUnusedSeconds; // @synthesize uiLastUnusedSeconds=_uiLastUnusedSeconds;
@property(nonatomic) unsigned int uiNonAtomicSingleFileCount; // @synthesize uiNonAtomicSingleFileCount=_uiNonAtomicSingleFileCount;
@property(nonatomic) unsigned int uiPkgType; // @synthesize uiPkgType=_uiPkgType;

@end

