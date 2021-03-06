//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class AVAsset, AVPlayer, AVPlayerItem, AVPlayerLayer, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface SightAssetPreviewView : UIView <UIScrollViewDelegate>
{
    _Bool _muted;
    _Bool _hideOverlayView;
    _Bool _videoReady;
    float _playRate;
    float _volume;
    id <SightAssetPreviewViewDelegate> _delegate;
    NSURL *_assetURL;
    AVAsset *_asset;
    UIView *_playScrollView;
    NSObject<OS_dispatch_queue> *_loadingQueue;
    AVPlayerItem *_playerItem;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    unsigned long long _previewOrientation;
    struct CGSize _outputSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
- (void)configWithAsset:(id)arg1;
- (struct CGRect)croppedFrame;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentPlaybackTime;
- (void)dealloc;
@property(nonatomic) __weak id <SightAssetPreviewViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isHideOverlayView) _Bool hideOverlayView; // @synthesize hideOverlayView=_hideOverlayView;
- (_Bool)isPlaying;
@property(nonatomic, getter=isVideoReady) _Bool videoReady; // @synthesize videoReady=_videoReady;
- (void)layoutSubviews;
- (void)loadAsset:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loadingQueue; // @synthesize loadingQueue=_loadingQueue;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
- (void)pause;
- (void)play;
@property(nonatomic) float playRate; // @synthesize playRate=_playRate;
@property(retain, nonatomic) UIView *playScrollView; // @synthesize playScrollView=_playScrollView;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
- (void)playerItemDidReachEnd:(id)arg1;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
- (struct CGRect)previewFrameWithVideoSize:(struct CGSize)arg1;
@property(nonatomic) unsigned long long previewOrientation; // @synthesize previewOrientation=_previewOrientation;
- (void)reset;
- (void)restart;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
@property(nonatomic) float volume; // @synthesize volume=_volume;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

