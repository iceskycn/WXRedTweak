//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MMProgressView, MMTimer, NSString, UIActivityIndicatorView, UIImageView, UILabel;

@interface MMLoadingView : UIView
{
    UIImageView *m_backgroundView;
    UILabel *m_label;
    UIActivityIndicatorView *m_activityIndicatorView;
    UIImageView *m_tipIconView;
    MMProgressView *m_viewProgress;
    _Bool m_bLoading;
    _Bool m_bIgnoringInteractionEventsWhenLoading;
    MMTimer *m_timer;
    NSString *m_loadingText;
    UILabel *m_labelTip;
    _Bool _autoLayoutInCenterOfSupperViewOnStartLoading;
}

- (void).cxx_destruct;
- (void)BeforeInit;
- (void)ShowTipView:(id)arg1 Title:(id)arg2 Delay:(double)arg3;
- (void)StopLoadingTimerFired:(id)arg1;
- (void)autoLayoutInCenter;
@property(nonatomic) _Bool autoLayoutInCenterOfSupperViewOnStartLoading; // @synthesize autoLayoutInCenterOfSupperViewOnStartLoading=_autoLayoutInCenterOfSupperViewOnStartLoading;
- (void)dealloc;
- (id)init;
- (id)initWithCustom:(struct CGRect)arg1 centerXOffset:(double)arg2 bkgColor:(id)arg3 textColor:(id)arg4;
- (id)initWithDownloadImg;
- (void)layoutSubviews;
@property(retain, nonatomic) UIActivityIndicatorView *m_activityIndicatorView; // @synthesize m_activityIndicatorView;
@property(nonatomic) _Bool m_bIgnoringInteractionEventsWhenLoading; // @synthesize m_bIgnoringInteractionEventsWhenLoading;
@property(readonly, nonatomic) _Bool m_bLoading; // @synthesize m_bLoading;
@property(retain, nonatomic) UIImageView *m_backgroundView; // @synthesize m_backgroundView;
@property(retain, nonatomic) UILabel *m_label; // @synthesize m_label;
@property(retain, nonatomic) UILabel *m_labelTip; // @synthesize m_labelTip;
@property(retain, nonatomic) MMProgressView *m_viewProgress; // @synthesize m_viewProgress;
- (void)setActivityIndicatorViewCenter:(_Bool)arg1;
- (void)setFitFrame:(long long)arg1;
- (void)setFitFrameDownloadImg:(long long)arg1;
- (void)setLabelText:(id)arg1;
- (void)showActivityIndicatorViewAnimation;
- (void)startLoading;
- (void)startLoadingButAnimatingAfterDelay:(double)arg1;
- (void)stopLoading;
- (void)stopLoadingAndShowError:(id)arg1;
- (void)stopLoadingAndShowError:(id)arg1 withDelay:(double)arg2;
- (void)stopLoadingAndShowOK;
- (void)stopLoadingAndShowOK:(id)arg1;
- (void)stopLoadingAndShowOK:(id)arg1 withDelay:(double)arg2;
- (void)stopLoadingInternal;

@end

