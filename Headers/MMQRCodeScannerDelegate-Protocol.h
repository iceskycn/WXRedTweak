//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol MMQRCodeScannerDelegate
- (void)onNoQRCode;
- (void)onQRCodeScanSuccess:(NSString *)arg1 atPoint:(vector_c080079c)arg2 originSize:(struct CGSize)arg3;
@end

