//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BFAppLinkResolving.h"

@interface BFWebViewAppLinkResolver : NSObject <BFAppLinkResolving>
{
}

+ (id)sharedInstance;
- (id)appLinkFromALData:(id)arg1 destination:(id)arg2;
- (id)getALDataFromLoadedPage:(id)arg1;
- (id)parseALData:(id)arg1;
- (id)appLinkFromURLInBackground:(id)arg1;
- (id)followRedirects:(id)arg1;

@end
