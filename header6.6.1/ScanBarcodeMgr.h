//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;

@interface ScanBarcodeMgr : MMService <MMService, PBMessageObserverDelegate>
{
    NSString *_extKey;
    _Bool _isUploading;
}

+ (unsigned int)getBarcodeType:(id)arg1;
@property(retain, nonatomic) NSString *extKey; // @synthesize extKey=_extKey;
- (void).cxx_destruct;
- (id)getHardCodeData;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)cancelUploading;
- (void)sendBarcode:(id)arg1 andType:(id)arg2 Scene:(unsigned int)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

