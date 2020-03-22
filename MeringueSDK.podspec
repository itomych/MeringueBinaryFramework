Pod::Spec.new do |s|
s.name         = "MeringueSDK"
s.version      = "1.7.1"
s.summary      = "Meringue for ios application."

s.description  = <<-DESC
Meringue for ios appliction, writen for private use itomich studio development
DESC

s.homepage     = "https://bitbucket.org/itomych/meringue-ios"
s.license      = { :type => "MIT", :file => "LICENSE" }
s.author       = { "itomych studio" => "office@itomy.ch" }
s.platform     = :ios, "8.0"
s.source       = { :http => "https://" }

s.source_files        = "MeringueSDK.framework/Headers/*.h"
s.public_header_files = "MeringueSDK.framework/Headers/*.h"

s.xcconfig = { 'OTHER_LDFLAGS': '-ObjC' }

s.vendored_frameworks = "MeringueSDK.framework"
s.framework  = "Foundation"
s.requires_arc = true

s.dependency 'AFNetworking', '>= 2.5.4', '< 4'
s.dependency 'hextensions/NSFoundation+Networking', '~> 2.2'
end