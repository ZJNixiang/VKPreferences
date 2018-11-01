//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, UIColor;

@interface CachedTitle : NSObject
{
    UIColor *_artistColor;
    UIColor *_titleColor;
    long long _pointSize;
    NSAttributedString *_title;
}

@property(retain, nonatomic) NSAttributedString *title; // @synthesize title=_title;
@property(nonatomic) long long pointSize; // @synthesize pointSize=_pointSize;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIColor *artistColor; // @synthesize artistColor=_artistColor;
- (void).cxx_destruct;

@end
