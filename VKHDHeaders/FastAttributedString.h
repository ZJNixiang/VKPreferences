//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableArray, NSString;

@interface FastAttributedString : NSObject
{
    NSLock *_framesetterLock;
    id observer;
    NSMutableArray *mutableLinks;
    struct __CFAttributedString *attrString;
    struct __CFAttributedString *truncatedLineLandscape;
    struct __CFAttributedString *truncatedLinePortrait;
    NSString *mString;
    struct __CTFramesetter *_framesetter;
    struct __CFDictionary *_highlightedTextAttributes;
    struct CGSize drawSizeLandscape;
    struct CGSize drawSizePortrait;
    struct CGSize drawSizeTruncationLandscape;
    struct CGSize drawSizeTruncationPortrait;
    struct _NSRange truncatedLineLandscapeStart;
    struct _NSRange truncatedLinePortraitStart;
    struct CGRect truncatedLineFrameLandscape;
    struct CGRect truncatedLineFramePortrait;
}

+ (long long)countLinesForString:(struct __CFAttributedString *)arg1 size:(struct CGSize)arg2 frameSetter:(struct __CTFramesetter *)arg3;
@property(nonatomic) struct __CFDictionary *highlightedTextAttributes; // @synthesize highlightedTextAttributes=_highlightedTextAttributes;
@property(nonatomic) struct __CTFramesetter *framesetter; // @synthesize framesetter=_framesetter;
@property(copy, nonatomic) NSString *mString; // @synthesize mString;
@property(nonatomic) struct _NSRange truncatedLinePortraitStart; // @synthesize truncatedLinePortraitStart;
@property(nonatomic) struct _NSRange truncatedLineLandscapeStart; // @synthesize truncatedLineLandscapeStart;
@property(nonatomic) struct CGSize drawSizeTruncationPortrait; // @synthesize drawSizeTruncationPortrait;
@property(nonatomic) struct CGSize drawSizeTruncationLandscape; // @synthesize drawSizeTruncationLandscape;
@property(nonatomic) struct __CFAttributedString *truncatedLinePortrait; // @synthesize truncatedLinePortrait;
@property(nonatomic) struct __CFAttributedString *truncatedLineLandscape; // @synthesize truncatedLineLandscape;
@property(nonatomic) struct CGRect truncatedLineFramePortrait; // @synthesize truncatedLineFramePortrait;
@property(nonatomic) struct CGRect truncatedLineFrameLandscape; // @synthesize truncatedLineFrameLandscape;
@property(nonatomic) struct CGSize drawSizePortrait; // @synthesize drawSizePortrait;
@property(nonatomic) struct CGSize drawSizeLandscape; // @synthesize drawSizeLandscape;
@property(nonatomic) struct __CFAttributedString *attrString; // @synthesize attrString;
@property(retain, nonatomic) NSMutableArray *mutableLinks; // @synthesize mutableLinks;
- (void).cxx_destruct;
- (void)setTextColor:(id)arg1 withLinks:(_Bool)arg2;
- (void)setHighlightedTextColor:(id)arg1;
- (long long)countLinesForSize:(struct CGSize)arg1 frameSetter:(struct __CTFramesetter *)arg2;
- (void)resetFramesetter;
- (void)clear;
- (id)init;
- (void)dealloc;

@end

