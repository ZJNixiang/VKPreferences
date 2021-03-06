//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MRCustomParamsProvider, NSString;

@interface MRTrackerParams : NSObject
{
    MRCustomParamsProvider *_customParamsProvider;
    _Bool _trackAppLaunch;
    NSString *_trackerId;
}

@property(nonatomic) _Bool trackAppLaunch; // @synthesize trackAppLaunch=_trackAppLaunch;
@property(retain, nonatomic) NSString *trackerId; // @synthesize trackerId=_trackerId;
- (void).cxx_destruct;
- (id)getCustomParams;
- (_Bool)isTrackAppLaunchEnabled;
- (void)disableTrackAppLaunch;
- (void)enableTrackAppLaunch;
- (void)setLanguage:(id)arg1;
- (void)setAge:(id)arg1;
- (void)setGender:(id)arg1;
- (id)initWithTrackerId:(id)arg1;

@end

