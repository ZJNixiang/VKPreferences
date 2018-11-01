//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL, UIImage;

@protocol NetworkingImageView <NSObject>
@property(nonatomic) _Bool allowGrayPlaceholder;
- (void)setImage:(UIImage *)arg1;

@optional
- (void)setHighlighted:(_Bool)arg1;
- (void)setHighlightedImage:(UIImage *)arg1;
- (void)setAvatarUsers:(NSArray *)arg1;
- (void)setGroupImages:(NSArray *)arg1 withPlaceholder:(NSString *)arg2;
- (void)setPlaceholder:(UIImage *)arg1 config:(_Bool)arg2;
- (void)setPlaceholder:(UIImage *)arg1;
- (void)setImage:(UIImage *)arg1 fromUrl:(NSURL *)arg2;
- (void)cancelLoading;
- (NSURL *)prepareForImageWithPath:(NSString *)arg1 withFilter:(NSString *)arg2 withPlaceholder:(NSString *)arg3 highlighted:(NSString *)arg4 cropPlaceholder:(_Bool)arg5;
- (void)setImageWithPath:(NSString *)arg1 withFilter:(NSString *)arg2 withPlaceholder:(NSString *)arg3 highlighted:(NSString *)arg4 cropPlaceholder:(_Bool)arg5;
- (void)setImageWithPath:(NSString *)arg1 withFilter:(NSString *)arg2 withPlaceholder:(NSString *)arg3 highlighted:(NSString *)arg4;
- (void)setImageWithPath:(NSString *)arg1 withFilter:(NSString *)arg2 withPlaceholder:(NSString *)arg3;
- (void)setImageWithPath:(NSString *)arg1 withFilter:(NSString *)arg2;
- (void)setImage:(UIImage *)arg1 animated:(_Bool)arg2;
@end

