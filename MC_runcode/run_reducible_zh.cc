void run_reducible_zh(const std::string SampleName = "",const int maxEvents = -1)
{
  
  gSystem->CompileMacro("runchannelEEEM.C");
  runchannelEEEM e(SampleName,maxEvents);
  e.Loop(SampleName,maxEvents);
  
  gSystem->CompileMacro("runchannelEEET.C");
  runchannelEEET a(SampleName,maxEvents);
  a.Loop(SampleName,maxEvents);
  
  gSystem->CompileMacro("runchannelEEMT.C");
  runchannelEEMT c(SampleName,maxEvents);
  c.Loop(SampleName,maxEvents);
  
  gSystem->CompileMacro("runchannelEETT.C");
  runchannelEETT g(SampleName,maxEvents);
  g.Loop(SampleName,maxEvents);
  
 
  gSystem->CompileMacro("runchannelMMEM.C");
  runchannelMMEM f(SampleName,maxEvents);
  f.Loop(SampleName,maxEvents); 
  
  gSystem->CompileMacro("runchannelMMET.C");
  runchannelMMET b(SampleName,maxEvents);
  b.Loop(SampleName,maxEvents);
  
  gSystem->CompileMacro("runchannelMMMT.C");
  runchannelMMMT d(SampleName,maxEvents);
  d.Loop(SampleName,maxEvents);

  gSystem->CompileMacro("runchannelMMTT.C");
  runchannelMMTT j(SampleName,maxEvents);
  j.Loop(SampleName,maxEvents);
  
   
}
