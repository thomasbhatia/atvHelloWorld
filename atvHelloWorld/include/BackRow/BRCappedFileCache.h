/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */


@class NSString, NSMutableDictionary;

@interface BRCappedFileCache : NSObject {
@private
	unsigned long long _maxSize;	// 4 = 0x4
	unsigned long long _currentSize;	// 12 = 0xc
	unsigned long long _purgeThreshold;	// 20 = 0x14
	unsigned long _purgeCount;	// 28 = 0x1c
	NSString *_cachePath;	// 32 = 0x20
	BOOL _purgingCache;	// 36 = 0x24
	NSMutableDictionary *_files;	// 40 = 0x28
}
@property(readonly, assign) unsigned long long currentSize;	// G=0x31683525; converted property
@property(readonly, assign) unsigned long long maxSize;	// G=0x31683535; converted property
@property(assign) unsigned long purgeCount;	// G=0x31683555; S=0x31683565; converted property
@property(assign) unsigned long long purgeThreshold;	// G=0x31683545; S=0x316839c1; converted property
- (id)initForPath:(id)path withMaxSize:(unsigned long long)maxSize;	// 0x31683685
- (void)_clearCacheFolder;	// 0x3168361d
- (id)_generateCacheFilePathForKey:(id)key extension:(id)extension;	// 0x316838d9
- (void)_incrementCacheSize:(unsigned long long)size;	// 0x31683811
- (void)_maintainCacheSize:(id)size;	// 0x31683a05
- (void)_terminateNotification:(id)notification;	// 0x31683575
- (id)addFileForKey:(id)key size:(unsigned long long)size extension:(id)extension;	// 0x31683edd
// converted property getter: - (unsigned long long)currentSize;	// 0x31683525
- (void)dealloc;	// 0x31683589
- (id)filePathForKey:(id)key;	// 0x316841dd
// converted property getter: - (unsigned long long)maxSize;	// 0x31683535
// converted property getter: - (unsigned long)purgeCount;	// 0x31683555
// converted property getter: - (unsigned long long)purgeThreshold;	// 0x31683545
- (void)removedFileWithKey:(id)key;	// 0x31683cfd
// converted property setter: - (void)setPurgeCount:(unsigned long)count;	// 0x31683565
// converted property setter: - (void)setPurgeThreshold:(unsigned long long)threshold;	// 0x316839c1
@end

