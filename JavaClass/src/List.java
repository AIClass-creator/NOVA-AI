/************************************
* Resizable array
*************************************/
public class List{
    private int[] m_Buffer;
    private int m_Size;
    private int m_Capacity;
    List()
    {
        m_Capacity = 0;
        m_Size = 0;
        m_Buffer = null;
        resize(5);
    }
    List(int ... values)
    {
        m_Size = values.length;
        resize(values.length);
        for (int i = 0; i < m_Size; i++)
            m_Buffer[i] = values[i];
    }
    private void resize(int capacity)
    {
        m_Capacity += capacity;
        if (m_Buffer != null)
        {
            int[] buf = new int[m_Capacity];
            for (int i = 0; i< m_Buffer.length; i++)
                buf[i] = m_Buffer[i];
            m_Buffer = buf;
        }
        else
            m_Buffer = new int[m_Capacity];
    }
    public void Add(int value)
    {
        if (m_Size == m_Capacity)
            resize(5);
        m_Buffer[m_Size] = value;
        m_Size++;
    }
    public void Reserve(int capacity)
    {
        resize(capacity);
    }
    public int Size(){ return m_Size; }
    public int Capacity(){ return m_Capacity; }

    public int At(int idx)
    {
        if (idx < m_Size)
            return m_Buffer[idx];
        throw new OutOfMemoryError();
    }
    public void Print()
    {
        for (int i = 0; i < m_Size; i++)
            System.out.print(m_Buffer[i] + ", ");
    }
}