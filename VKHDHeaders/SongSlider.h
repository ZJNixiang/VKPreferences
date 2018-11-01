//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIImageView, UITouch;

@interface SongSlider : UIControl
{
    float movingDX;
    _Bool continuousUpdate;
    float _value;
    UIImageView *backgroundView;
    UIImageView *knobView;
    UITouch *movingTouch;
    UIImageView *backgroundView2;
}

@property(retain, nonatomic) UIImageView *backgroundView2; // @synthesize backgroundView2;
@property(retain, nonatomic) UITouch *movingTouch; // @synthesize movingTouch;
@property(nonatomic) _Bool continuousUpdate; // @synthesize continuousUpdate;
@property(nonatomic) float value; // @synthesize value=_value;
@property(retain, nonatomic) UIImageView *knobView; // @synthesize knobView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateKnobPosition;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 slider1Image:(id)arg2 slider2Image:(id)arg3 knobImage:(id)arg4;

@end

