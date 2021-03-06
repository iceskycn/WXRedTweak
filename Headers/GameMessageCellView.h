//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonMessageCellView.h"

@class GameMessageViewModel, MMTimer, UIImageView;

@interface GameMessageCellView : CommonMessageCellView
{
    unsigned int m_uiCurrImageIndex;
    unsigned int m_uiAnimationTimes;
    UIImageView *m_gameImageView;
    MMTimer *m_gameTimer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)doAnimation;
- (id)getGameImageByIndex:(unsigned int)arg1;
- (void)handleGameTimer:(id)arg1;
- (void)layoutContentView;
- (void)onAppear;
- (id)operationMenuItems;
- (void)startGameTimer;
- (void)stopAnimation;
- (void)stopGameTimer;

// Remaining properties
@property(readonly, nonatomic) GameMessageViewModel *viewModel; // @dynamic viewModel;

@end

