//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class NSDictionary;

@interface KAProgressLabel : UILabel
{
    CDUnknownBlockType _radiansFromDegrees;
    _Bool _clockWise;
    CDUnknownBlockType _progressLabelVCBlock;
    double _backBorderWidth;
    double _frontBorderWidth;
    double _startDegree;
    double _endDegree;
    double _progress;
    unsigned long long _progressType;
    NSDictionary *_colorTable;
}

@property(nonatomic) _Bool clockWise; // @synthesize clockWise=_clockWise;
@property(copy, nonatomic) NSDictionary *colorTable; // @synthesize colorTable=_colorTable;
@property(nonatomic) unsigned long long progressType; // @synthesize progressType=_progressType;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) double endDegree; // @synthesize endDegree=_endDegree;
@property(nonatomic) double startDegree; // @synthesize startDegree=_startDegree;
@property(nonatomic) double frontBorderWidth; // @synthesize frontBorderWidth=_frontBorderWidth;
@property(nonatomic) double backBorderWidth; // @synthesize backBorderWidth=_backBorderWidth;
@property(copy, nonatomic) CDUnknownBlockType progressLabelVCBlock; // @synthesize progressLabelVCBlock=_progressLabelVCBlock;
- (void).cxx_destruct;
- (struct CGRect)rectForCircle:(struct CGRect)arg1;
- (void)drawProgressLabelCircleInRect:(struct CGRect)arg1;
- (void)drawProgressLabelRectInRect:(struct CGRect)arg1;
- (void)colorTableDictionaryWarmer;
- (void)setProgress:(double)arg1 timing:(int)arg2 duration:(double)arg3 delay:(double)arg4;
- (void)drawRect:(struct CGRect)arg1;
- (void)baseInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

