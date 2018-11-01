//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CustomActivityIndicator, UILabel;

@interface UINoDataLoadingView : UIView
{
    UILabel *_noDataLabel;
    CustomActivityIndicator *_noDataLoading;
}

@property(retain, nonatomic) CustomActivityIndicator *noDataLoading; // @synthesize noDataLoading=_noDataLoading;
@property(retain, nonatomic) UILabel *noDataLabel; // @synthesize noDataLabel=_noDataLabel;
- (void).cxx_destruct;
- (void)checkLoading:(_Bool)arg1 count:(unsigned long long)arg2;
- (void)setNoConnectionText;
- (void)setStyle:(int)arg1;
- (void)setText:(id)arg1;
- (id)initWithText:(id)arg1 style:(int)arg2;

@end

