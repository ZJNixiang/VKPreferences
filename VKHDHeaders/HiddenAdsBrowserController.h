//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SimpleBrowserController.h"

#import "UIWebViewDelegate.h"

@class NSString, NSTimer, NSURL;

@interface HiddenAdsBrowserController : SimpleBrowserController <UIWebViewDelegate>
{
    NSURL *_targetLink;
    NSTimer *_destructionTimer;
}

@property(retain, nonatomic) NSTimer *destructionTimer; // @synthesize destructionTimer=_destructionTimer;
@property(retain, nonatomic) NSURL *targetLink; // @synthesize targetLink=_targetLink;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)finish;
- (void)viewDidLoad;
- (void)show;
- (id)initWithLink:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

