<!DOCTYPE nsscheme>
<nsscheme type="sequence">
  <position>
    <x>4</x>
    <y>30</y>
  </position>
  <size>
    <width>1366</width>
    <height>621</height>
  </size>
  <name></name>
  <comment></comment>
  <author></author>
  <pascalCode contains="yes"/>
  <checkSyntax enabled="no"/>
  <variables/>
  <sequence>
    <inputinstruction>
      <text>n</text>
      <comment></comment>
    </inputinstruction>
    <inputinstruction>
      <text>a</text>
      <comment></comment>
    </inputinstruction>
    <simpleinstruction>
      <text>max = a</text>
      <comment></comment>
    </simpleinstruction>
    <simpleinstruction>
      <text>k = 1</text>
      <comment></comment>
    </simpleinstruction>
    <iteration>
      <condition>
        <text>k&lt;n</text>
        <comment></comment>
      </condition>
      <loop>
        <sequence>
          <inputinstruction>
            <text>a</text>
            <comment></comment>
          </inputinstruction>
          <selection instructionsheight="330" conditionheight="95">
            <condition>
              <text>a>max</text>
              <comment></comment>
            </condition>
            <ontrue>
              <sequence>
                <simpleinstruction>
                  <text>max = a</text>
                  <comment></comment>
                </simpleinstruction>
              </sequence>
            </ontrue>
            <onfalse>
              <sequence/>
            </onfalse>
          </selection>
          <simpleinstruction>
            <text>k = k + 1</text>
            <comment></comment>
          </simpleinstruction>
        </sequence>
      </loop>
    </iteration>
    <outputinstruction>
      <text>'Max = ', max</text>
      <comment></comment>
    </outputinstruction>
  </sequence>
</nsscheme>
