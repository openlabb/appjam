//
//  NSStringWhiteSpace.h
//  YueBao
//
//  <%= @project_name %> by <%= @developer.capitalize %>
//  Copyright(c) <%= Time.now.year %>, All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Whitespace) 

// Note: a category implementation does not have ivars in { }

- (NSString *)stringByCompressingWhitespaceTo:(NSString *)seperator;

@end
