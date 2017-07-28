//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "UITextFieldDelegate.h"

@class KGLoginLabelTextField, KGThemeButton, KGThemeLabel, NSString, NSTimer, RetrievePasswordObject, UILabel, UIScrollView;

@interface ModifiedPasswordWithVerifyCodeViewController : KGViewController <UITextFieldDelegate>
{
    int _weakPasswordFlag;
    _Bool _hadSendEmail;
    RetrievePasswordObject *_pwdObject;
    KGLoginLabelTextField *_verifiCodeTextField;
    KGLoginLabelTextField *_passwordTextField;
    KGThemeButton *_sendvericationBtn;
    KGThemeButton *_nextBtn;
    KGThemeButton *_pwdSwitchBtn;
    KGThemeButton *_pushEmailBtn;
    UIScrollView *_scrollView;
    UILabel *_tipsLabel;
    KGThemeLabel *_phoneTipsLable;
    NSTimer *_resendTimer;
    long long _timerCount;
}

@property(nonatomic) long long timerCount; // @synthesize timerCount=_timerCount;
@property(retain, nonatomic) NSTimer *resendTimer; // @synthesize resendTimer=_resendTimer;
@property(retain, nonatomic) KGThemeLabel *phoneTipsLable; // @synthesize phoneTipsLable=_phoneTipsLable;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) KGThemeButton *pushEmailBtn; // @synthesize pushEmailBtn=_pushEmailBtn;
@property(retain, nonatomic) KGThemeButton *pwdSwitchBtn; // @synthesize pwdSwitchBtn=_pwdSwitchBtn;
@property(retain, nonatomic) KGThemeButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) KGThemeButton *sendvericationBtn; // @synthesize sendvericationBtn=_sendvericationBtn;
@property(retain, nonatomic) KGLoginLabelTextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(retain, nonatomic) KGLoginLabelTextField *verifiCodeTextField; // @synthesize verifiCodeTextField=_verifiCodeTextField;
@property(retain, nonatomic) RetrievePasswordObject *pwdObject; // @synthesize pwdObject=_pwdObject;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (unsigned long long)errorCount;
- (void)showTextFieldError:(id)arg1 string:(id)arg2 editing:(_Bool)arg3;
- (void)pwdSwitchBtnFun:(id)arg1;
- (void)backActionDefault:(id)arg1;
- (void)backAction:(id)arg1;
- (void)addNavigationBar;
- (void)sendvericationBtnFun:(id)arg1;
- (void)touchScrollView;
- (void)perfromRegister;
- (void)nextBtnFun;
- (void)resendTimerFire:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)pushEmailVC:(id)arg1;
- (id)getTextFiedBackGroundViewWithOriginY:(double)arg1;
- (void)initView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
