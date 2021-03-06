//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSMutableDictionary, NSString;

@interface AppCommunicateData : NSObject
{
    unsigned long long _command;
    NSMutableDictionary *_dictionaryData;
    NSData *_fileData;
    NSArray *_fileDatas;
    _Bool _returnFromApp;
    int _result;
    int _scene;
    NSString *_conversationAccount;
    NSString *_openID;
    NSString *_sdkVer;
    NSString *_lang;
    NSString *_country;
}

- (void).cxx_destruct;
- (id)DataToReq;
- (id)DataToResp;
- (_Bool)MakeAuthRequest:(id)arg1;
- (_Bool)MakeAuthResp:(id)arg1;
- (_Bool)MakeCommand:(unsigned long long)arg1;
- (_Bool)MakeLinkObject:(id)arg1;
- (_Bool)MakeMediaInternalMessage:(id)arg1;
- (_Bool)MakeMediaMessage:(id)arg1;
- (_Bool)MakeTextMessage:(id)arg1;
- (_Bool)ReqToData:(id)arg1;
- (_Bool)ReqToData:(id)arg1 withMediaInternalMessage:(id)arg2;
- (_Bool)RespToData:(id)arg1;
- (id)authRequest;
- (id)authResp;
- (unsigned long long)command;
@property(retain, nonatomic) NSString *conversationAccount; // @synthesize conversationAccount=_conversationAccount;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
@property(retain, nonatomic) NSArray *fileDatas; // @synthesize fileDatas=_fileDatas;
- (id)init;
- (void)initCommonField:(unsigned long long)arg1;
- (id)initWithPropertList:(id)arg1;
@property(retain, nonatomic) NSString *lang; // @synthesize lang=_lang;
- (id)mediaInternalMessage;
- (id)mediaMessage;
@property(retain, nonatomic) NSString *openID; // @synthesize openID=_openID;
- (id)propertList;
@property(nonatomic) int result; // @synthesize result=_result;
@property(nonatomic) _Bool returnFromApp; // @synthesize returnFromApp=_returnFromApp;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *sdkVer; // @synthesize sdkVer=_sdkVer;
- (id)textMessage;

@end

