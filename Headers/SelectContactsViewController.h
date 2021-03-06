//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "ContactSelectViewDelegate.h"
#import "SelectContactsViewControllerDelegate.h"

@class ContactSelectView, NSString, UIView;

@interface SelectContactsViewController : MMSearchBarDisplayController <SelectContactsViewControllerDelegate, ContactSelectViewDelegate>
{
    id <SelectContactsViewControllerDelegate> m_delegate;
    UIView *m_titleView;
    unsigned int m_uiScene;
    ContactSelectView *m_selectView;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)initTitleArea;
- (void)initView;
@property(nonatomic) __weak id <SelectContactsViewControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
- (void)onCancelBack:(id)arg1;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onSelectBrandContact;
- (void)onSelectContact:(id)arg1;
- (void)onSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)viewDidLoad;
- (void)viewDidUnload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

