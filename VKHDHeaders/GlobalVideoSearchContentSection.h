//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VideoContentSection.h"

@class video_search_req;

@interface GlobalVideoSearchContentSection : VideoContentSection
{
    video_search_req *_searchRequest;
}

@property(nonatomic) __weak video_search_req *searchRequest; // @synthesize searchRequest=_searchRequest;
- (void).cxx_destruct;
- (_Bool)loadable;
- (id)cellForRow:(long long)arg1;
- (unsigned long long)numberOfRowsInSection;
- (_Bool)preventUppercase;
- (id)postLoadingString;
- (_Bool)canShowTitle;
- (id)titleForSection;
- (_Bool)expandable;

@end

