//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "iPadStandardCell.h"

@class BackupImageView, UILabel, VKDocument, VKLink;

@interface iPadDocsViewCell : iPadStandardCell
{
    VKDocument *_document;
    VKLink *_link;
    BackupImageView *_docPreview;
    UILabel *_docTitle;
    UILabel *_docDescription;
}

@property(retain, nonatomic) UILabel *docDescription; // @synthesize docDescription=_docDescription;
@property(retain, nonatomic) UILabel *docTitle; // @synthesize docTitle=_docTitle;
@property(retain, nonatomic) BackupImageView *docPreview; // @synthesize docPreview=_docPreview;
@property(retain, nonatomic) VKLink *link; // @synthesize link=_link;
@property(retain, nonatomic) VKDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

