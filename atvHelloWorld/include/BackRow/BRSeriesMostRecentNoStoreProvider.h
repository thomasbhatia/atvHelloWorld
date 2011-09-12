/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRProvider.h"

@class NSMutableArray, BRSeriesProvider, NSSet;
@protocol BRControlFactory;

@interface BRSeriesMostRecentNoStoreProvider : NSObject <BRProvider> {
@private
	NSSet *_mediaTypes;	// 4 = 0x4
	BRSeriesProvider *_seriesProvider;	// 8 = 0x8
	id<BRControlFactory> _controlFactory;	// 12 = 0xc
	BRSeriesProvider *_unwatchedProvider;	// 16 = 0x10
	NSMutableArray *_data;	// 20 = 0x14
	BOOL _storeAvailable;	// 24 = 0x18
	BOOL _needsUpdate;	// 25 = 0x19
	BOOL _initialized;	// 26 = 0x1a
}
+ (id)providerForMediaTypes:(id)mediaTypes controlFactory:(id)factory filteringOutProvider:(id)provider;	// 0x3166479d
- (void)_checkStore;	// 0x316645f1
- (id)_data;	// 0x316643a1
- (id)_filteredDataFrom:(id)from;	// 0x31664081
- (id)_filteredSeriesNames;	// 0x316641d1
- (id)_initForMediaTypes:(id)mediaTypes controlFactory:(id)factory filteringOutProvider:(id)provider;	// 0x316647ed
- (void)_reloadData;	// 0x316642cd
- (void)_setStoreAvailable:(BOOL)available;	// 0x316643e9
- (BOOL)_storeAvailable;	// 0x31664071
- (id)controlFactory;	// 0x31664061
- (id)dataAtIndex:(long)index;	// 0x31664751
- (long)dataCount;	// 0x31664779
- (void)dealloc;	// 0x3166491d
- (id)hashForDataAtIndex:(long)index;	// 0x316646d9
@end

