//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class GiftCenter, RankSummary, RecentPlayCommText, RecentPlayRecommendBanner, RecommendTopic;

@interface RecentPlayGameInfo_SubItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) RecentPlayCommText *commText; // @dynamic commText;
@property(retain, nonatomic) GiftCenter *giftCenter; // @dynamic giftCenter;
@property(retain, nonatomic) RankSummary *rankSummary; // @dynamic rankSummary;
@property(retain, nonatomic) RecentPlayRecommendBanner *recommendBanner; // @dynamic recommendBanner;
@property(retain, nonatomic) RecommendTopic *recommendTopic; // @dynamic recommendTopic;
@property(nonatomic) unsigned int type; // @dynamic type;

@end
