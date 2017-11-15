function [output1] = R_MultisenseGyroscopeFrame(var1)
    if coder.target('MATLAB')
        [output1] = R_MultisenseGyroscopeFrame_mex(var1);
    else
        coder.cinclude('R_MultisenseGyroscopeFrame_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('R_MultisenseGyroscopeFrame_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
