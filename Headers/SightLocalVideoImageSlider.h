//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SightLocalViewSliderMaskViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIScrollViewDelegate.h"

@class AVAsset, AVAssetImageGenerator, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, SightLocalViewSliderMaskView, UICollectionView;

@interface SightLocalVideoImageSlider : UIView <UIScrollViewDelegate, SightLocalViewSliderMaskViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    struct CGRect _normalModeFrame;
    _Bool _isSystemCrop;
    _Bool _isCropAllowEnlarge;
    _Bool _isLargeMode;
    _Bool _isLargeAnimationBegin;
    float _playRate;
    float _usrDefOutputDuration;
    float _outputDuration;
    float _totalDuration;
    id <SightLocalVideoImageSliderDelegate> _delegate;
    AVAsset *_asset;
    UICollectionView *_thumbImagesCollectionView;
    double _widthOfImage;
    double _currentRateOfImage;
    double _numberOfImagesPerSecond;
    double _lastContentOffset;
    unsigned long long _currentScrollDirection;
    AVAssetImageGenerator *_imageGenerator;
    NSMutableDictionary *_thumbImageDictionary;
    NSMutableArray *_totalTimeList;
    NSMutableArray *_largeModeTimeListOnShow;
    SightLocalViewSliderMaskView *_maskView;
    double _lastStartTime;
    double _lastEndTime;
    NSIndexPath *_enlargeCellIndex;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void)cancelAllImageGeneration;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
@property(nonatomic) double currentRateOfImage; // @synthesize currentRateOfImage=_currentRateOfImage;
@property(nonatomic) unsigned long long currentScrollDirection; // @synthesize currentScrollDirection=_currentScrollDirection;
@property(nonatomic) __weak id <SightLocalVideoImageSliderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didStopScrolling;
- (void)endOfMaskDidMoveToTime:(double)arg1;
@property(nonatomic) NSIndexPath *enlargeCellIndex; // @synthesize enlargeCellIndex=_enlargeCellIndex;
@property(retain, nonatomic) AVAssetImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withSystemCrop:(_Bool)arg2 withCropAllowEnlarge:(_Bool)arg3;
@property(nonatomic) _Bool isCropAllowEnlarge; // @synthesize isCropAllowEnlarge=_isCropAllowEnlarge;
- (_Bool)isEnlargedCell:(id)arg1;
@property(nonatomic) _Bool isLargeAnimationBegin; // @synthesize isLargeAnimationBegin=_isLargeAnimationBegin;
@property(nonatomic) _Bool isLargeMode; // @synthesize isLargeMode=_isLargeMode;
@property(nonatomic) _Bool isSystemCrop; // @synthesize isSystemCrop=_isSystemCrop;
@property(retain, nonatomic) NSMutableArray *largeModeTimeListOnShow; // @synthesize largeModeTimeListOnShow=_largeModeTimeListOnShow;
@property(nonatomic) double lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(nonatomic) double lastEndTime; // @synthesize lastEndTime=_lastEndTime;
@property(nonatomic) double lastStartTime; // @synthesize lastStartTime=_lastStartTime;
- (void)loadMoreImages;
- (void)loadMoreImagesFromIndexPath:(id)arg1 withSrollDirection:(unsigned long long)arg2;
- (void)loadSingleImageAtIndexPath:(id)arg1 needFakeResultImmediately:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)loadSingleImageForCell:(id)arg1 atIndexPath:(id)arg2;
@property(retain, nonatomic) SightLocalViewSliderMaskView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) double numberOfImagesPerSecond; // @synthesize numberOfImagesPerSecond=_numberOfImagesPerSecond;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
@property(nonatomic) float outputDuration; // @synthesize outputDuration=_outputDuration;
- (void)playFlagOfMaskDidMoveToTime:(double)arg1;
@property(nonatomic) float playRate; // @synthesize playRate=_playRate;
- (double)positionOfTime:(double)arg1;
- (_Bool)queryIsCropAllowEnlarge;
- (_Bool)queryIsSystemCrop;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setStartFlagTime:(double)arg1 andEndFlagTime:(double)arg2;
@property(retain, nonatomic) NSMutableDictionary *thumbImageDictionary; // @synthesize thumbImageDictionary=_thumbImageDictionary;
@property(retain, nonatomic) UICollectionView *thumbImagesCollectionView; // @synthesize thumbImagesCollectionView=_thumbImagesCollectionView;
@property(nonatomic) float totalDuration; // @synthesize totalDuration=_totalDuration;
@property(retain, nonatomic) NSMutableArray *totalTimeList; // @synthesize totalTimeList=_totalTimeList;
@property(nonatomic) float usrDefOutputDuration; // @synthesize usrDefOutputDuration=_usrDefOutputDuration;
@property(nonatomic) double widthOfImage; // @synthesize widthOfImage=_widthOfImage;
- (void)shouldSwitchToLargeMode:(_Bool)arg1;
- (void)sightLocalViewSliderMaskView:(id)arg1 didStopMovingAtPosition:(double)arg2 isStartFlag:(_Bool)arg3;
- (void)sightLocalViewSliderMaskViewPlayFlagDidChange:(id)arg1;
- (void)startOfMaskDidMoveToTime:(double)arg1;
- (void)startPlayFlagAtTime:(double)arg1;
- (void)stopPlayFlag;
- (void)thumbImagesCollectionViewContentInsetNeedChange;
- (double)timeOfEndFlag;
- (double)timeOfPosition:(double)arg1;
- (double)timeOfStartFlag;
- (CDStruct_1b6d18a9)timeStampAtIndex:(long long)arg1;
- (id)timeValueForThumbAtRowIndex:(long long)arg1;
- (struct CGRect)validFrameOfMaskView;
- (id)visibleIndexPathAtTime:(CDStruct_1b6d18a9)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

