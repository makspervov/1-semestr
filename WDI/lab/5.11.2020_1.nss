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
      <text>Podaj a:=</text>
      <comment></comment>
    </inputinstruction>
    <inputinstruction>
      <text>Podaj b:=</text>
      <comment></comment>
    </inputinstruction>
    <selection instructionsheight="492" conditionheight="57">
      <condition>
        <text>a>b</text>
        <comment></comment>
      </condition>
      <ontrue>
        <sequence>
          <outputinstruction>
            <text>'a jest wieksze od b'</text>
            <comment></comment>
          </outputinstruction>
        </sequence>
      </ontrue>
      <onfalse>
        <sequence>
          <selection instructionsheight="432" conditionheight="54">
            <condition>
              <text>a&lt;b</text>
              <comment></comment>
            </condition>
            <ontrue>
              <sequence>
                <outputinstruction>
                  <text>'a jest mniejsze od b'</text>
                  <comment></comment>
                </outputinstruction>
              </sequence>
            </ontrue>
            <onfalse>
              <sequence>
                <outputinstruction>
                  <text>'a jest równe b'</text>
                  <comment></comment>
                </outputinstruction>
              </sequence>
            </onfalse>
          </selection>
        </sequence>
      </onfalse>
    </selection>
  </sequence>
</nsscheme>
