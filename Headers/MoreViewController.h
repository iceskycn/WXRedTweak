//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTabBarBaseViewController.h"

#import "CSettingExt.h"
#import "EmoticonRecommendMgrExt.h"
#import "IHeadImageExt.h"
#import "IMsgExt.h"
#import "INewSyncExt.h"
#import "ISettingExtChange.h"
#import "IWCCardPkgExt.h"
#import "IWCLabsMgrExt.h"
#import "IWCSettingRedPointMgrExt.h"
#import "MMKernelExt.h"
#import "MyFavoritesViewControllerDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCMallLogicMgrExt.h"
#import "WCPayLogicMgrExt.h"
#import "WCPayWalletLockVerifyLogicDelegate.h"

@class MMAnimationTipView, MMTableViewInfo, MMTimer, MyFavoritesViewController, NSString, UpdateWechatRedDotConfig, WCBizLoadingView;

@interface MoreViewController : MMTabBarBaseViewController <MyFavoritesViewControllerDelegate, ISettingExtChange, IWCSettingRedPointMgrExt, IWCLabsMgrExt, IMsgExt, WCPayWalletLockVerifyLogicDelegate, INewSyncExt, IHeadImageExt, CSettingExt, WCPayLogicMgrExt, EmoticonRecommendMgrExt, MMKernelExt, WCMallLogicMgrExt, IWCCardPkgExt, WCActionSheetDelegate>
{
    vector_a9c0768e m_vecMesssageIdToListen;
    MMTableViewInfo *m_tableViewInfo;
    UpdateWechatRedDotConfig *m_oUpdateWechatRedDotConfig;
    MyFavoritesViewController *m_favViewController;
    MMTimer *m_favCacheTimer;
    _Bool _bIsShareCardListShowSvrRedDot;
    _Bool _bIsEnterShareCardListFromOuterJump;
    unsigned int _patternLockLogicTag;
    WCBizLoadingView *_loadingView;
    MMAnimationTipView *_resultToastView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)OnEmoticonRecommendNewStateChanged:(_Bool)arg1;
- (void)OnGetBankCardReddotData;
- (void)OnGetLQTReddotData;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnStatusChangedOrderListCountChanged:(unsigned int)arg1;
- (void)OnWCMallActivityChanged;
- (void)OnWCMallShowStatusInMoreViewChanged;
- (void)ReloadWallet;
- (void)addFunctionSection;
- (void)addProfileSection;
- (void)addSettingSection;
- (void)addWCMallSection;
@property(nonatomic) _Bool bIsEnterShareCardListFromOuterJump; // @synthesize bIsEnterShareCardListFromOuterJump=_bIsEnterShareCardListFromOuterJump;
@property(nonatomic) _Bool bIsShareCardListShowSvrRedDot; // @synthesize bIsShareCardListShowSvrRedDot=_bIsShareCardListShowSvrRedDot;
- (void)backToSplitViewEmptyViewController:(id)arg1;
- (void)cardDeeplink;
- (void)checkDBAutoRecover;
- (void)checkReload;
- (void)clearUpdateWechatRedDotConfig;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)getSettingHeadImage;
- (unsigned int)getTotalCount;
- (id)getUpdateWechatRedDotConfig;
- (id)getVCWithDeepLinkName:(id)arg1;
- (id)init;
- (void)initDeepLinkConfig;
- (void)initLoadingView;
- (void)initUpdateWechatRedDotConfig;
- (void)initView;
- (_Bool)isNeedShowWCPay;
- (_Bool)isNeedShowWCPayInTabNew;
@property(retain, nonatomic) WCBizLoadingView *loadingView; // @synthesize loadingView=_loadingView;
- (void)makeProfileCell:(id)arg1;
- (void)makeWCCardView:(id)arg1;
- (void)makeWCCell:(id)arg1;
- (void)makeWCPayView:(id)arg1;
- (void)onCloseFavTimeOut;
- (void)onFavoritesClose;
- (void)onGetUpdateInfoOk;
- (void)onHeadImageChange:(id)arg1;
- (void)onNewSyncModUserInfoExt:(id)arg1;
- (void)onSettingChanged:(int)arg1;
- (void)onSettingExtChanged:(int)arg1;
- (void)onShowMyQrCode;
- (void)onWCCardLayoutRedDotChanged;
- (void)onWCCardMessageEntryTipChanged:(id)arg1;
- (void)onWCCardMessageUnreadCountChanged:(id)arg1;
- (void)onWCCardTips;
- (void)onWCSettingRedPointChange;
- (void)onWechatEntranceRedPointChange;
- (void)openWCPayView;
@property(nonatomic) unsigned int patternLockLogicTag; // @synthesize patternLockLogicTag=_patternLockLogicTag;
- (void)pluginsChanged:(id)arg1;
- (void)reloadMoreView;
- (void)reportNativeWCPayClick;
@property(retain, nonatomic) MMAnimationTipView *resultToastView; // @synthesize resultToastView=_resultToastView;
- (void)setUpdateWechatRedDotConfig:(id)arg1;
- (void)showAppleWatchUpdateView;
- (void)showAppleWatchView;
- (void)showChangeLanguage;
- (void)showEmoticonStoreView;
- (void)showFavoriteView;
- (void)showHtml5PayView;
- (void)showKitchen;
- (void)showMyQRCodeInProfileView;
- (void)showMyWCView;
- (void)showOverseaNativePayView;
- (void)showPrivateSetting;
- (void)showPrivateSettingWithContactVerify:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showProfileView;
- (void)showSettingView;
- (void)showShareCardView;
- (void)showShareCardViewInternal;
- (void)showToastTipsViewWithText:(id)arg1 isSuccess:(_Bool)arg2;
- (void)showWCCardView;
- (void)showWCPayView;
- (void)showWcRecentPrivacySetting:(unsigned long long)arg1;
- (void)startLoading;
- (void)stopLoading;
- (void)updateHead:(id)arg1;
- (void)updateTabBarBadge;
- (void)updateViewWhenSelectTab:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)walletLockVerifySuccess:(id)arg1;
- (void)willAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

