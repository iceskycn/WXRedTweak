//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BSBusinessProductItem : NSObject
{
    unsigned int _price;
    NSString *_productId;
    NSString *_productName;
    NSString *_sellerName;
    NSString *_sellerUserName;
    NSString *_productImgUrl;
}

+ (id)fromServerObj:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) unsigned int price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *productImgUrl; // @synthesize productImgUrl=_productImgUrl;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *sellerName; // @synthesize sellerName=_sellerName;
@property(retain, nonatomic) NSString *sellerUserName; // @synthesize sellerUserName=_sellerUserName;

@end
