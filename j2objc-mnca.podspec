#
# Be sure to run `pod lib lint j2objc.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
    s.name             = 'j2objc-mnca'
    s.version          = '2.8'
    s.summary          = 'Integrates the pre-built J2ObjC frameworks into your project.'
    s.description      = <<-DESC
    Downloads the j2objc release and integrates the frameworks into your project.
                         DESC
  
    s.homepage         = 'https://github.com/fepriyadi/j2objc'
    s.license          = 'private'
    s.author           = { 'Fep' => 'fepriyadihrp@gmail.com' }
    s.source           = { :git => 'https://github.com/fepriyadi/j2objc.git', :tag => s.version.to_s }
  
    s.ios.deployment_target = '9.0'
    s.requires_arc = false

    # s.prepare_command = <<-CMD
    #     scripts/download.sh
    # CMD

    s.preserve_paths = 'j2objc_lib/**/*'
    s.public_header_files = 'j2objc_lib/include/**/*.h'
    s.source_files = 'j2objc_lib/include/**/*.h'
    s.header_mappings_dir = 'j2objc_lib/include'
  
    s.libraries = 'icucore', 'z', 'iconv'
    # 'jre_emul', 
    # s.vendored_libraries = 'j2objc_lib/lib/libjre_emul.a', 'j2objc_lib/lib/libjavax_inject.a'
  
    s.xcconfig = {
        'HEADER_SEARCH_PATHS' => '"${PODS_ROOT}/j2objc_lib/include"'
    }
    s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  
  end
