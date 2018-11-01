//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSMutableArray, NSOperation, NSString, UIAlertViewFix8, UIScrollView, UploadVideoObject, VKAttachmentObject;

@interface AttachManager : NSObject <UIAlertViewDelegate>
{
    NSOperation *uploadingOperation;
    NSString *uploadingFile;
    VKAttachmentObject *attachError;
    UIAlertViewFix8 *errorAlert;
    UploadVideoObject *videoUploadObject;
    _Bool _isMessages;
    NSMutableArray *_attachments;
    UIScrollView *_attachScroll;
    id <AttachManagerDelegate> _delegate;
}

+ (id)compressAttachmentPhoto:(id)arg1;
@property(nonatomic) id <AttachManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isMessages; // @synthesize isMessages=_isMessages;
@property(nonatomic) UIScrollView *attachScroll; // @synthesize attachScroll=_attachScroll;
@property(retain, nonatomic) NSMutableArray *attachments; // @synthesize attachments=_attachments;
- (void).cxx_destruct;
- (void)compressPickerAssets:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)addAttachment:(id)arg1;
- (void)cancelUpload;
- (_Bool)isUploading;
- (void)buildAttachments:(id *)arg1 toArray:(id *)arg2;
- (void)videoUploadComplete:(id)arg1 forAttach:(id)arg2;
- (void)startUploadAttachment:(id)arg1;
- (void)uploadAttachmentDidFinished:(id)arg1;
- (void)uploadAttachmentProgressDidChanged:(id)arg1 toProgress:(id)arg2;
- (void)uploadAttachmentDidFailed:(id)arg1;
- (void)removeAllAttachments;
- (void)deleteAttachmentFromScrollAtPosition:(long long)arg1;
- (void)deleteButtonClick:(id)arg1;
- (void)updateAttachScroll:(int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

